//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPageSetup : NSObject
{
    int mOrientation;
    int mPageOrder;
    _Bool mCustomFirstPageNumber;
    unsigned long long mFirstPageNumber;
    unsigned long long mFitToHeight;
    unsigned long long mFitToWidth;
    unsigned long long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;
- (id)description;
- (void)setFooterMargin:(float)arg1;
- (float)footerMargin;
- (void)setHeaderMargin:(float)arg1;
- (float)headerMargin;
- (void)setBottomMargin:(float)arg1;
- (float)bottomMargin;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;
- (void)setRightMargin:(float)arg1;
- (float)rightMargin;
- (void)setLeftMargin:(float)arg1;
- (float)leftMargin;
- (void)setScale:(unsigned long long)arg1;
- (unsigned long long)scale;
- (void)setFitToWidth:(unsigned long long)arg1;
- (unsigned long long)fitToWidth;
- (void)setFitToHeight:(unsigned long long)arg1;
- (unsigned long long)fitToHeight;
- (void)setFirstPageNumber:(unsigned long long)arg1;
- (unsigned long long)firstPageNumber;
- (void)setCustomFirstPageNumber:(_Bool)arg1;
- (_Bool)customFirstPageNumber;
- (void)setOrder:(int)arg1;
- (int)order;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (id)init;

@end

