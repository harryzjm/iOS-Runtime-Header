//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNDSPGraphInterpreter : NSObject
{
    struct unique_ptr<DSPGraph::Interpreter, std::__1::default_delete<DSPGraph::Interpreter>> _interpreter;
}

+ (vector_9492931a)stringVectorFromStringArray:(id)arg1;
+ (unordered_map_0ace0ab1)stringMapFromStringDictionary:(id)arg1;
+ (id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
+ (id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
- (id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
- (id)init;

@end
