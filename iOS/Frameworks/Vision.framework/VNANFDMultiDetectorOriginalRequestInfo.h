//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject
{
    NSString *_requestRevisionKey;
    unsigned long long _originalRequestResultsIndex;
}

+ (id)requestClassToMultiDetectorClassPerRequestRevision;
- (void).cxx_destruct;
@property(readonly) unsigned long long originalRequestResultsIndex; // @synthesize originalRequestResultsIndex=_originalRequestResultsIndex;
@property(readonly) NSString *requestRevisionKey; // @synthesize requestRevisionKey=_requestRevisionKey;
- (id)initWithProcessingOptionRequestRevisionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2;

@end
