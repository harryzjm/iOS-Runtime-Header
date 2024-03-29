//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRE : NSObject
{
    void *_mreInstance;
}

@property(nonatomic) void *mreInstance; // @synthesize mreInstance=_mreInstance;
- (_Bool)FillUnknownError:(id *)arg1;
- (_Bool)ConvertException:(const struct exception *)arg1 toError:(id *)arg2;
- (_Bool)ConvertSystemError:(const struct system_error *)arg1 toError:(id *)arg2;
- (id)search:(id)arg1 error:(id *)arg2;
- (id)initWithSignatures:(id)arg1 density:(long long)arg2 algorithm:(long long)arg3 error:(id *)arg4;
- (id)initWithMREInstance:(void *)arg1 error:(id *)arg2;
- (void)dealloc;

@end

