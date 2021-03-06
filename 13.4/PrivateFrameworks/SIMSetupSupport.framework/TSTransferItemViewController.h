//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UINavigationControllerDelegate-Protocol.h>
#import <SIMSetupSupport/UITableViewDataSource-Protocol.h>
#import <SIMSetupSupport/UITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSIndexPath, NSString, OBBoldTrayButton, UITableView;
@protocol TSSIMSetupFlowDelegate;

@interface TSTransferItemViewController : OBWelcomeController <UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem>
{
    OBBoldTrayButton *_continueButton;
    _Bool _isOneClickSupported;
    id <TSSIMSetupFlowDelegate> _delegate;
    NSDictionary *_postdata;
    NSString *_URL;
    UITableView *_tableView;
    NSArray *_transferItems;
    NSIndexPath *_chosenPlanIndexPath;
}

- (void).cxx_destruct;
@property(retain) NSIndexPath *chosenPlanIndexPath; // @synthesize chosenPlanIndexPath=_chosenPlanIndexPath;
@property(retain) NSArray *transferItems; // @synthesize transferItems=_transferItems;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly) _Bool isOneClickSupported; // @synthesize isOneClickSupported=_isOneClickSupported;
@property(readonly) NSString *URL; // @synthesize URL=_URL;
@property(readonly) NSDictionary *postdata; // @synthesize postdata=_postdata;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canBeShownFromSuspendedState;
- (void)_startPlanTransfer:(id)arg1;
- (void)_continueButtonTapped;
- (void)_cancelButtonTapped;
- (void)_setNavigationItems;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateTableData:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTransferItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

