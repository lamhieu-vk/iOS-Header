//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableArray, PDFAnnotation, PDFMarkupMenuView, PDFView, UIMenuItem;

__attribute__((visibility("hidden")))
@interface PDFViewControllerPrivate : NSObject
{
    PDFView *view;
    struct CGRect viewMarquee;
    CALayer *marqueeEffect;
    PDFAnnotation *activeAnnotation;
    unsigned long long textSelectionMenu;
    NSMutableArray *textSelectionMenuItems;
    UIMenuItem *highlightItem;
    UIMenuItem *showMarkupMenuItem;
    PDFMarkupMenuView *markupMenuView;
    double longPressGestureStartTime;
    _Bool didPostPDFExtensionViewAnnotationLongPress;
}

- (void).cxx_destruct;

@end

