//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNDataDetectorSupporting-Protocol.h>

@class CROutputRegion, NSArray, NSString;

@interface VNRecognizedTextBlockObservation <VNDataDetectorSupporting>
{
    CROutputRegion *_crOutputRegion;
}

- (void).cxx_destruct;
- (id)getDataDetectorResults:(id *)arg1;
- (id)debugDescription;
- (id)getCROutputRegion;
@property(readonly, nonatomic, getter=getLines) NSArray *lines;
@property(readonly, nonatomic, getter=getTranscript) NSString *transcript;
- (id)boundingBoxForRange:(struct _NSRange)arg1 error:(id *)arg2;
- (id)topCandidates:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=getChildren) NSArray *children;
- (id)initWithRequestRevision:(unsigned long long)arg1 crOutputRegion:(id)arg2;

@end
