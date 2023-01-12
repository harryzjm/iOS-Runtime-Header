//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

@interface AXMVisionScreenRecognitionOptions
{
    _Bool _disableCoagulator;
    _Bool _isRTL;
    CIImage *_testingImage;
    long long _orientation;
    struct CGRect _fullRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct CGRect fullRect; // @synthesize fullRect=_fullRect;
@property(nonatomic) _Bool disableCoagulator; // @synthesize disableCoagulator=_disableCoagulator;
@property(retain, nonatomic) CIImage *testingImage; // @synthesize testingImage=_testingImage;

@end
