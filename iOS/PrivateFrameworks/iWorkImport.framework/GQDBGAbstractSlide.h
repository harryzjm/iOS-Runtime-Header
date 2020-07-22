//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class GQDBGBodyPlaceholder, GQDBGObjectPlaceholder, GQDBGSlideNumberPlaceholder, GQDBGTitlePlaceholder, GQDSStyle, GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQDBGAbstractSlide : NSObject
{
    GQDSStylesheet *mStylesheet;
    GQDSStyle *mSlideStyle;
    GQDBGTitlePlaceholder *mTitlePlaceholder;
    GQDBGBodyPlaceholder *mBodyPlaceholder;
    GQDBGObjectPlaceholder *mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder *mSlideNumberPlaceholder;
    _Bool mHidden;
    char *mID;
    _Bool mCallGenerator;
}

- (int)readAttributesForSlide:(struct _xmlTextReader *)arg1;
- (char *)ID;
- (_Bool)isHidden;
- (id)stylesheet;
- (id)slideStyle;
- (void)dealloc;

@end
