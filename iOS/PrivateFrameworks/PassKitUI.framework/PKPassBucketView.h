//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, PKPass, PKPassBucketTemplate, PKPassColorProfile;

@interface PKPassBucketView : UIView
{
    NSArray *_fieldViews;
    NSMutableArray *_currentFieldViews;
    long long _background;
    PKPass *_pass;
    PKPassColorProfile *_colorProfile;
    PKPassBucketTemplate *_bucketTemplate;
    NSArray *_bucket;
}

@property(retain, nonatomic) NSArray *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) PKPassBucketTemplate *bucketTemplate; // @synthesize bucketTemplate=_bucketTemplate;
@property(retain, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (void)_presentRecursiveDiff:(id)arg1 inView:(id)arg2 forSubviewAtIndex:(unsigned long long)arg3 withSubviews:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)_backgroundForBucketTemplate:(id)arg1;
- (void)_updateSubviews;
- (id)_fieldViewsByWidth;
- (void)_measureAndFitVariablySizedSubviews;
- (void)_measureAndFitEvenlySizedSubviews;
- (void)layoutSubviews;
- (id)description;
- (void)dealloc;

@end

