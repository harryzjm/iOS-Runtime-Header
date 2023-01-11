//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLatticeResults, NSArray, NSDate, NSDictionary;

@interface CRTextRecognizerResults : NSObject
{
    NSDictionary *_inputOptions;
    NSDate *_startTime;
    NSDate *_endTime;
    NSArray *_textFeatures;
    NSArray *_codeMaps;
    CRLatticeResults *_latticeResults;
}

@property(retain, nonatomic) CRLatticeResults *latticeResults; // @synthesize latticeResults=_latticeResults;
@property(retain, nonatomic) NSArray *codeMaps; // @synthesize codeMaps=_codeMaps;
@property(retain, nonatomic) NSArray *textFeatures; // @synthesize textFeatures=_textFeatures;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSDictionary *inputOptions; // @synthesize inputOptions=_inputOptions;
- (void).cxx_destruct;

@end
