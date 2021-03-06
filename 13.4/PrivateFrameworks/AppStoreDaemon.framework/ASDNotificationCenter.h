//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDNotificationServiceProtocol-Protocol.h>

@class NSHashTable, NSMutableDictionary;
@protocol ASDNotificationCenterDialogObserver, OS_dispatch_queue;

@interface ASDNotificationCenter : NSObject <ASDNotificationServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_notificationObservers;
    struct os_unfair_lock_s _observerLock;
    NSHashTable *_progressObservers;
    id <ASDNotificationCenterDialogObserver> _dialogObserver;
}

+ (id)interface;
+ (id)defaultCenter;
- (void).cxx_destruct;
@property __weak id <ASDNotificationCenterDialogObserver> dialogObserver; // @synthesize dialogObserver=_dialogObserver;
- (void)deliverProgress:(id)arg1;
- (void)deliverNotifications:(id)arg1;
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)removeProgressObserver:(id)arg1;
- (void)removeNotificationObserver:(id)arg1 forName:(id)arg2;
- (void)addProgressObserver:(id)arg1;
- (void)addNotificationObserver:(id)arg1 forName:(id)arg2;
- (id)init;

@end

