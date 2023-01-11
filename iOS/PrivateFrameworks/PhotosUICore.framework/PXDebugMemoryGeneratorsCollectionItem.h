//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PHMemory;

@interface PXDebugMemoryGeneratorsCollectionItem : NSObject
{
    NSString *_name;
    NSString *_description;
    NSDictionary *_options;
    PHMemory *_memory;
    NSString *_rejectionCause;
}

- (void).cxx_destruct;
@property(readonly) NSString *rejectionCause; // @synthesize rejectionCause=_rejectionCause;
@property(readonly) PHMemory *memory; // @synthesize memory=_memory;
@property(readonly) NSDictionary *options; // @synthesize options=_options;
@property(readonly) NSString *description; // @synthesize description=_description;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithMemory:(id)arg1 memoryInfo:(id)arg2;
- (id)initWithOptions:(id)arg1;

@end
