//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DResourceLoader : NSObject
{
}

+ (id)loader;
- (int)virtualScreenForContext:(id)arg1;
- (unsigned long long)uploadResource:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;
- (_Bool)shouldReuploadHandle:(id)arg1 config:(void *)arg2;
- (void)destroyHandle:(id)arg1 insideContext:(id)arg2;
- (void)postbindHandle:(id)arg1 config:(void *)arg2;

@end

