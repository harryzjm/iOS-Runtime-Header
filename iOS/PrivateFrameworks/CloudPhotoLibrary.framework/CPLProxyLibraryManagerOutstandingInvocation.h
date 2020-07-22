//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLResource, NSData, NSError;

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject
{
    _Bool _inMemoryRequest;
    _Bool _didStart;
    _Bool _didFinish;
    float _progress;
    NSError *_finalError;
    CPLResource *_finalResource;
    NSData *_finalData;
}

@property(retain, nonatomic) NSData *finalData; // @synthesize finalData=_finalData;
@property(retain, nonatomic) CPLResource *finalResource; // @synthesize finalResource=_finalResource;
@property(retain, nonatomic) NSError *finalError; // @synthesize finalError=_finalError;
@property(nonatomic) _Bool didFinish; // @synthesize didFinish=_didFinish;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool didStart; // @synthesize didStart=_didStart;
@property(nonatomic, getter=isInMemoryRequest) _Bool inMemoryRequest; // @synthesize inMemoryRequest=_inMemoryRequest;
- (void).cxx_destruct;
- (id)description;

@end
