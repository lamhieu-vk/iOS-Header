//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/ISURLBagObserver-Protocol.h>

@class NSDictionary, NSString, SUScriptDictionary;
@protocol OS_dispatch_queue;

@interface SUScriptStoreBagLoader : NSObject <ISURLBagObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_bagDictionary;
    SUScriptDictionary *_scriptStoreBagDictionary;
}

- (void).cxx_destruct;
- (void)_updateWithBagDictionary:(id)arg1 allowsPostingBagDidChangeNotification:(_Bool)arg2;
- (void)bagDidChange:(id)arg1;
- (id)scriptStoreBagDictionary;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

