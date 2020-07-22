//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCH3DGLShaderProgramLoader
{
}

+ (id)loader;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (id)activateShader:(id)arg1 insideSession:(id)arg2;
- (void)postbindHandle:(id)arg1 config:(void *)arg2;
- (void)bindHandle:(id)arg1 config:(void *)arg2;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;
- (void)compileShaderSource:(IteratorRange_617e5e79)arg1 forHandle:(id)arg2;
- (id)generateHandleWithConfig:(void *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
