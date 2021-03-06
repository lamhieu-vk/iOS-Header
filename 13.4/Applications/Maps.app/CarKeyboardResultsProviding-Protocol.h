//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"

@class CarKeyboardModeController, NSString;

@protocol CarKeyboardResultsProviding <NSObject, UISearchResultsUpdating>
@property(nonatomic) __weak CarKeyboardModeController *keyboardMode;
- (void)handleCancelButtonPressed;
- (void)handleSearchTextDidChange:(NSString *)arg1;
- (void)handleSearchButtonPressedWithText:(NSString *)arg1;
- (void)updateForInteractionModel:(unsigned long long)arg1;
@end

