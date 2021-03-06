//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class IDSDaemonRequestTimer, NSString;

@interface IDSAppleCareDaemonResponseListener : NSObject <IDSDaemonListenerProtocol>
{
    IDSDaemonRequestTimer *_requestTimer;
    CDUnknownBlockType _disconnectedBlock;
}

- (void).cxx_destruct;
- (void)daemonDisconnected;
- (void)applecareResponseForRequestID:(id)arg1 withError:(id)arg2;
- (id)initWithDisconnectedBlockAndNoTimeout:(CDUnknownBlockType)arg1;
- (id)initWithRequestTimer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

