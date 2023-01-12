//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ICInlineDrawingAnalyticsInformation : NSObject
{
    unsigned long long _startFingerStrokeCount;
    unsigned long long _startPencilStrokeCount;
    unsigned long long _endFingerStrokeCount;
    unsigned long long _endPencilStrokeCount;
    long long _lastUsedTool;
}

@property(nonatomic) long long lastUsedTool; // @synthesize lastUsedTool=_lastUsedTool;
@property(nonatomic) unsigned long long endPencilStrokeCount; // @synthesize endPencilStrokeCount=_endPencilStrokeCount;
@property(nonatomic) unsigned long long endFingerStrokeCount; // @synthesize endFingerStrokeCount=_endFingerStrokeCount;
@property(nonatomic) unsigned long long startPencilStrokeCount; // @synthesize startPencilStrokeCount=_startPencilStrokeCount;
@property(nonatomic) unsigned long long startFingerStrokeCount; // @synthesize startFingerStrokeCount=_startFingerStrokeCount;

@end

