//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHRecognitionResult.h"

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult
{
    NSString *_string;
    double _rotation;
}

- (void).cxx_destruct;
@property(readonly) double rotation; // @synthesize rotation=_rotation;
@property(readonly) NSString *string; // @synthesize string=_string;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3;

@end

