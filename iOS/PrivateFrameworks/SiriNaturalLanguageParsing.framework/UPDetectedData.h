//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UPDetectedData : NSObject
{
    NSString *_label;
    const struct __CFArray *_dataDetectorResult;
}

- (void).cxx_destruct;
@property(readonly) const struct __CFArray *dataDetectorResult; // @synthesize dataDetectorResult=_dataDetectorResult;
@property(readonly, copy) NSString *label; // @synthesize label=_label;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 dataDetectorResult:(const struct __CFArray *)arg2;

@end
