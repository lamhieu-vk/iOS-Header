//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <RemoteUI/UIWebViewDelegate-Protocol.h>

@class NSString, UIToolbar, UIWebView, _UIBackdropView;
@protocol RemoteUIWebViewControllerDelegate;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    UIToolbar *_toolbar;
    CDUnknownBlockType _loadCompletion;
    _UIBackdropView *_statusBarBackdrop;
    _Bool _scalesPageToFit;
    id <RemoteUIWebViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
@property(nonatomic) __weak id <RemoteUIWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)loadURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)donePressed:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
@property(readonly, nonatomic) UIWebView *webView;
@property(readonly, nonatomic) UIToolbar *toolbar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

