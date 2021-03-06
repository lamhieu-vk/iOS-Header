//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelephonyUtilities/TUMutableCallDisplayContext.h>

@class CXCallDirectoryManager, NSObject;
@protocol OS_dispatch_queue, TUDynamicCallDisplayContextDelegate;

@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext
{
    id <TUDynamicCallDisplayContextDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CXCallDirectoryManager *_callDirectoryManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CXCallDirectoryManager *callDirectoryManager; // @synthesize callDirectoryManager=_callDirectoryManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) __weak id <TUDynamicCallDisplayContextDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)_initializeAsynchronousStateWithCall:(id)arg1;
- (void)_initializeSynchronousStateWithCall:(id)arg1 contactIdentifier:(id)arg2 contactsDataProvider:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithDisplayContext:(id)arg1 call:(id)arg2 serialQueue:(id)arg3;
- (id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3 contactsDataSource:(id)arg4;
- (id)initWithCall:(id)arg1 contactIdentifier:(id)arg2 serialQueue:(id)arg3;

@end

