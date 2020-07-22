//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface DKDGLShaderQualifier : NSObject
{
    int _uniformLocation;
    _Bool _needsUpdate;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int uniformLocation; // @synthesize uniformLocation=_uniformLocation;
@property(readonly, nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
- (void)updateUniformLocationWithShaderProgramObject:(int)arg1;
- (void)setGLUniformCheckWithShader:(id)arg1;
- (void)setGLUniformWithShader:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

