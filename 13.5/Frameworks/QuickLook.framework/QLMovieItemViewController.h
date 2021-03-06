//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLMediaItemViewController.h>

#import <QuickLook/AVEditBehaviorDelegate-Protocol.h>
#import <QuickLook/AVPictureInPictureControllerDelegate-Protocol.h>

@class AVEditBehavior, AVPlayerViewController, NSLayoutConstraint, NSString, PHPlaceholderView, QLMovieEdits, QLOverlayPlayButton, QLVideoScrubberView, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLMovieItemViewController : QLMediaItemViewController <AVPictureInPictureControllerDelegate, AVEditBehaviorDelegate>
{
    _Bool _previewIsVisisble;
    _Bool _isObservingPlayerExternalPlaybackActive;
    PHPlaceholderView *_airPlayPlaceholderView;
    _Bool _isEditing;
    _Bool _isSavingEditsBeforeDismissing;
    _Bool _assetCanBeRotated;
    AVPlayerViewController *_playerViewController;
    QLOverlayPlayButton *_playButton;
    QLVideoScrubberView *_scrubber;
    NSLayoutConstraint *_bottomScrubberConstraint;
    UIView *_scrubberContainer;
    UIScrollView *_scrubberContainerScrollView;
    double _scrubberVerticalOffset;
    UIView *_playerViewContainer;
    UIScrollView *_playerViewControllerScrollView;
    AVEditBehavior *_editBehavior;
    QLMovieEdits *_edits;
    QLMovieEdits *_editsSinceLastSave;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool assetCanBeRotated; // @synthesize assetCanBeRotated=_assetCanBeRotated;
@property(nonatomic) _Bool isSavingEditsBeforeDismissing; // @synthesize isSavingEditsBeforeDismissing=_isSavingEditsBeforeDismissing;
@property(retain, nonatomic) QLMovieEdits *editsSinceLastSave; // @synthesize editsSinceLastSave=_editsSinceLastSave;
@property(retain, nonatomic) QLMovieEdits *edits; // @synthesize edits=_edits;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) AVEditBehavior *editBehavior; // @synthesize editBehavior=_editBehavior;
@property(nonatomic) __weak UIScrollView *playerViewControllerScrollView; // @synthesize playerViewControllerScrollView=_playerViewControllerScrollView;
@property(retain, nonatomic) UIView *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(nonatomic) double scrubberVerticalOffset; // @synthesize scrubberVerticalOffset=_scrubberVerticalOffset;
@property(retain) UIScrollView *scrubberContainerScrollView; // @synthesize scrubberContainerScrollView=_scrubberContainerScrollView;
@property(retain) UIView *scrubberContainer; // @synthesize scrubberContainer=_scrubberContainer;
@property(retain) NSLayoutConstraint *bottomScrubberConstraint; // @synthesize bottomScrubberConstraint=_bottomScrubberConstraint;
@property(retain) QLVideoScrubberView *scrubber; // @synthesize scrubber=_scrubber;
@property(retain) QLOverlayPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void)_updatePlaceHolderView;
@property(readonly, nonatomic) PHPlaceholderView *airPlayPlaceholderView;
- (void)handlePerformedKeyCommandIfNeeded:(id)arg1;
- (id)registeredKeyCommands;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)editBehaviorDidCancel:(id)arg1;
- (id)editBehaviorAlertActionsForDoneButtonTap:(id)arg1;
- (void)_showFailedToSaveChangesAlertWithError:(id)arg1;
- (void)savePreviewEditedCopyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_saveMovieIfEditedWithEditedCopy:(id)arg1 shouldDismissAfterSaving:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_saveMovieIfEdited:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_rotateMovieRight;
- (void)_rotateIfPossible;
- (void)_rotateRightButtonTapped;
- (void)updateInterfaceAfterSavingEdits;
- (void)updateInterfaceForSavingEdits;
- (id)editProgressIndicatorMessage;
- (void)_updateEditMode;
- (void)_resetTrimmingValues;
- (void)_updateInterfaceAfterExitingEditMode;
- (void)_updateEditsTrimmingValuesWithTrimStartTime:(double)arg1 trimEndTime:(double)arg2;
- (void)_exitEditMode:(_Bool)arg1;
- (void)_enterEditMode;
- (_Bool)_enterEditModeIfPossible;
- (void)editButtonTapped;
- (void)_setupEditBehavior;
- (_Bool)shouldHandleRegisteringForCommandCenterHandlers;
- (_Bool)shouldDisplayPlayButtonInNavigationBar;
- (_Bool)shouldAllowEditingContents;
- (id)parallaxView;
- (id)transitioningView;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (long long)preferredWhitePointAdaptivityStyle;
- (_Bool)_videoIsPlaying;
- (void)didChangePlayingStatus;
- (void)_updatePlayButtonVisibility;
- (void)setPlayControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canToggleFullScreen;
- (_Bool)canSwipeToDismiss;
- (_Bool)canPinchToDismiss;
- (id)scrollViewInView:(id)arg1;
- (id)scrollView;
- (_Bool)play;
- (_Bool)canEnterFullScreen;
- (id)timeLabelScrollView;
- (id)accessoryView;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)_metadataItemTitle;
- (id)setupPlayerViewWithPlayer:(id)arg1;
- (void)addScrubberIfNeededWithDeferral;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

