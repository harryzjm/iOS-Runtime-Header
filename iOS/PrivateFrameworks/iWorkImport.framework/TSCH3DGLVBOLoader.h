//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCH3DGLVBOLoader
{
    unsigned int mType;
}

+ (id)loaderWithType:(unsigned int)arg1;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (void)setClientState:(const struct DataBufferInfo *)arg1;
- (void)loadSingleValueInBuffer:(id)arg1;
- (_Bool)activateResource:(id)arg1 insideSession:(id)arg2;
- (void)bindHandle:(id)arg1 config:(void *)arg2;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;
- (unsigned int)usageOfResource:(id)arg1;
- (id)generateHandleWithConfig:(void *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(unsigned int)arg1;

@end

