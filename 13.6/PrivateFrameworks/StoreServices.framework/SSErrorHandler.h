//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SSXPCConnection;
@protocol OS_dispatch_queue, SSErrorHandlerDelegate;

@interface SSErrorHandler : NSObject
{
    SSXPCConnection *_controlConnection;
    id <SSErrorHandlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_failureTypes;
    SSXPCConnection *_observerConnection;
}

- (void)_tearDownConnections;
- (void)_sendDisconnectMessage;
- (void)_reconnectToDaemonWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_openSessionWithMessage:(id)arg1;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_dispatchToDelegate:(CDUnknownBlockType)arg1;
- (void)stopWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(copy) NSArray *failureTypes;
@property id <SSErrorHandlerDelegate> delegate;
- (void)dealloc;
- (id)init;

@end

