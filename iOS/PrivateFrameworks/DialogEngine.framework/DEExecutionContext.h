//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEExecutionContext : NSObject
{
    void *_This;
    shared_ptr_3beef14e _SharedThis;
}

+ (id)globalParameters;
- (id).cxx_construct;
- (void).cxx_destruct;
@property shared_ptr_3beef14e SharedThis; // @synthesize SharedThis=_SharedThis;
@property void *This; // @synthesize This=_This;
- (_Bool)isBuiltinType:(id)arg1;
- (id)getBuiltinSemanticConcepts;
- (void)enableDebugLogging;
- (void)registerMorphunDataPathFor:(id)arg1 path:(id)arg2;
@property(readonly) NSString *locale;
@property(readonly) NSString *loadStatus;
- (id)upgrade:(id)arg1;
- (_Bool)needsUpgrade:(id)arg1;
- (void)setTemplateDir:(id)arg1;
- (id)getFile;
- (void)setFile:(id)arg1;
- (id)findVariable:(id)arg1;
- (void)addVariable:(id)arg1;
- (_Bool)load:(id)arg1 locale:(id)arg2;
- (id)initWithPtr:(shared_ptr_3beef14e)arg1;
- (id)init;

@end
