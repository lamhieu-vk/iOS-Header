//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;
@protocol MDIndexer;

@interface CSIndexAgent : CSXPCConnection
{
    id <MDIndexer> _indexer;
    NSMutableDictionary *_indexConnections;
}

+ (id)indexDelegateAgent;
+ (id)indexAgent:(_Bool)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *indexConnections; // @synthesize indexConnections=_indexConnections;
@property(retain, nonatomic) id <MDIndexer> indexer; // @synthesize indexer=_indexer;
- (_Bool)handleCommand:(const char *)arg1 info:(id)arg2 connection:(id)arg3;
- (id)indexConnection:(id)arg1;
- (_Bool)lostClientConnection:(id)arg1 error:(id)arg2;
- (_Bool)addClientConnectionIfAllowedForConnection:(id)arg1;
- (_Bool)addClientConnectionIfAllowedForConfiguration:(id)arg1;

@end

