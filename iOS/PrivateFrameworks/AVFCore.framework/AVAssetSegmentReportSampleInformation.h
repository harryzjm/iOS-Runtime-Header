//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVAssetSegmentReportSampleInformation : NSObject
{
    CDStruct_1b6d18a9 _presentationTimeStamp;
    long long _offset;
    long long _length;
    _Bool _isSyncSample;
}

@property(readonly, nonatomic) _Bool isSyncSample; // @synthesize isSyncSample=_isSyncSample;
@property(readonly, nonatomic) long long length; // @synthesize length=_length;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationTimeStamp; // @synthesize presentationTimeStamp=_presentationTimeStamp;
- (void)dealloc;
- (id)initWithFigSegmentReportSampleInformationDictionary:(id)arg1;

@end
