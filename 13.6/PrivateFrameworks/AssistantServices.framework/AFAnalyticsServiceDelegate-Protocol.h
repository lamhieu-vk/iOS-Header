//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@protocol AFAnalyticsServiceDelegate <NSObject>
- (oneway void)boostQueuedEvents:(void (^)(NSError *))arg1;
- (oneway void)flushStagedEventsWithReply:(void (^)(NSError *))arg1;
@end

