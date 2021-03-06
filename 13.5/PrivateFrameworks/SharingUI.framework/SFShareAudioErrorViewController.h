//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SharingUI/SFShareAudioBaseViewController.h>

@class NSError, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface SFShareAudioErrorViewController : SFShareAudioBaseViewController
{
    UILabel *_infoLabel;
    UILabel *_internalLabel;
    UIButton *_dismissButton;
    NSError *_error;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) UILabel *internalLabel; // @synthesize internalLabel=_internalLabel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
- (void)eventDismiss:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

