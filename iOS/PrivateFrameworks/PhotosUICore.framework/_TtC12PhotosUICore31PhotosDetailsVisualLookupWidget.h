//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, PXPhotosDetailsContext;
@protocol PXWidgetInteractionDelegate;

__attribute__((visibility("hidden")))
@interface _TtC12PhotosUICore31PhotosDetailsVisualLookupWidget
{
    MISSING_TYPE *widgetInteractionDelegate;
    MISSING_TYPE *contextObservation;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long contentLayoutStyle;
@property(nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property(nonatomic, retain) PXPhotosDetailsContext *context;
@property(nonatomic) __weak id <PXWidgetInteractionDelegate> widgetInteractionDelegate; // @synthesize widgetInteractionDelegate;

@end

