//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UPDataDetectors : NSObject
{
    struct UPDataDetector *_dataDetector;
    void *_ddUsoMapper;
}

@property(readonly) void *ddUsoMapper; // @synthesize ddUsoMapper=_ddUsoMapper;
@property(readonly) struct UPDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
- (id)_matchSpansForDetectedDataArray:(struct __CFArray *)arg1 label:(id)arg2;
- (id)matchSpansForDetectedData:(id)arg1;
- (id)matchSpansForUtterance:(id)arg1;
- (id)matchSpans:(id)arg1;
- (void)dealloc;
- (id)initLoadFromDataDetectorsDirectoryPath:(id)arg1 forLocale:(id)arg2;
- (id)initWithSystemConfiguration:(id)arg1 forLocale:(id)arg2;
- (id)initLoadFromDataDetectorsDirectoryPath:(id)arg1;

@end
