//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface MPArtworkColorAnalyzer : NSObject
{
    long long _algorithm;
    UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long algorithm; // @synthesize algorithm=_algorithm;
- (void).cxx_destruct;
- (id)_fallbackColorAnalysis;
- (void)analyzeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithImage:(id)arg1 algorithm:(long long)arg2;

@end
