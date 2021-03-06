//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, NSXPCStoreServer;

@interface RTPersistenceRemoteStoreServer : NSObject
{
    NSXPCStoreServer *_xpcStoreServer;
    NSURL *_storeURL;
    NSURL *_modelURL;
    NSDictionary *_serverOptions;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *serverOptions; // @synthesize serverOptions=_serverOptions;
@property(retain) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property(retain) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain) NSXPCStoreServer *xpcStoreServer; // @synthesize xpcStoreServer=_xpcStoreServer;
- (void)startListening;
- (id)initWithStoreURL:(id)arg1 modelURL:(id)arg2 options:(id)arg3;
- (id)init;

@end

