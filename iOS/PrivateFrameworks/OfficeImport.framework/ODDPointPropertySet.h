//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : NSObject
{
    NSString *mLayoutTypeId;
    NSString *mPresentationName;
    NSString *mPresentationStyleLabel;
    int mPresentationStyleIndex;
    int mPresentationStyleCount;
    NSObject *mPresentationAssociatedId;
    _Bool mCustomVerticalFlip;
    double mCustomScaleX;
    double mCustomScaleY;
    double mCustomOffsetX;
    double mCustomOffsetY;
}

- (void).cxx_destruct;
- (void)setCustomOffsetY:(double)arg1;
- (double)customOffsetY;
- (void)setCustomOffsetX:(double)arg1;
- (double)customOffsetX;
- (void)setCustomScaleY:(double)arg1;
- (double)customScaleY;
- (void)setCustomScaleX:(double)arg1;
- (double)customScaleX;
- (id)description;
- (void)setCustomVerticalFlip:(_Bool)arg1;
- (_Bool)customVerticalFlip;
- (void)setPresentationAssociatedId:(id)arg1;
- (id)presentationAssociatedId;
- (void)setPresentationStyleCount:(int)arg1;
- (int)presentationStyleCount;
- (void)setPresentationStyleIndex:(int)arg1;
- (int)presentationStyleIndex;
- (void)setPresentationStyleLabel:(id)arg1;
- (id)presentationStyleLabel;
- (void)setPresentationName:(id)arg1;
- (id)presentationName;
- (void)setLayoutTypeId:(id)arg1;
- (id)layoutTypeId;

@end

