//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface XBLaunchImageError : NSError
{
    _Bool _fatal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, getter=isFatal) _Bool fatal; // @synthesize fatal=_fatal;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 fatal:(_Bool)arg4;

@end

