//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSFooterHyperlinkView.h>

@protocol SiriAppsFooterViewDelegate;

@interface SiriAppsFooterView : PSFooterHyperlinkView
{
    id <SiriAppsFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriAppsFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapLearnMore:(id)arg1;
- (id)initWithSpecifier:(id)arg1;

@end

