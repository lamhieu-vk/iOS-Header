//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class UIView, WFAction, WFActionDrawerResultsViewController;

@protocol WFActionDrawerResultsViewControllerDelegate <NSObject>
- (void)resultsViewController:(WFActionDrawerResultsViewController *)arg1 didSelectDocumentationForAction:(WFAction *)arg2 fromView:(UIView *)arg3;
- (void)resultsViewController:(WFActionDrawerResultsViewController *)arg1 didSelectAction:(WFAction *)arg2;
@end

