class Twitter:
    def __init__(self):
        self.timestamp = 0
        self.user_tweets = defaultdict(deque)
        self.following = defaultdict(set)

    def postTweet(self, userId: int, tweetId: int) -> None:
        self.user_tweets[userId].appendleft((self.timestamp, tweetId))
        self.timestamp += 1
        if len(self.user_tweets[userId]) > 10:
            self.user_tweets[userId].pop()

    def getNewsFeed(self, userId: int) -> list[int]:
        min_heap = []
        users = self.following[userId] | {userId}
        for user in users:
            for tweet in self.user_tweets[user]:
                heapq.heappush(min_heap, tweet)
                if len(min_heap) > 10:
                    heapq.heappop(min_heap)
        return [tweetId for _, tweetId in sorted(min_heap, reverse=True)]

    def follow(self, followerId: int, followeeId: int) -> None:
        if followerId != followeeId:
            self.following[followerId].add(followeeId)

    def unfollow(self, followerId: int, followeeId: int) -> None:
        self.following[followerId].discard(followeeId)
