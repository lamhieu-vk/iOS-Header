//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCNotificationSource-Protocol.h>
#import <SpringBoard/SBAlertItemPresenter-Protocol.h>

@class NCNotificationDispatcher, NSString;

@interface SBUserAlertNotificationSource : NSObject <NCNotificationSource, SBAlertItemPresenter>
{
    NCNotificationDispatcher *_dispatcher;
}

@property(retain, nonatomic) NCNotificationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentAlertItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canPresentMultipleAlertItemsSimultaneously;
- (_Bool)presentsAlertItemsModally;
- (id)initWithDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

