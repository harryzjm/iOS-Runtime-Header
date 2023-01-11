//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _ACComponentVector : NSObject <NSSecureCoding>
{
    struct AudioComponentVector mVector;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVector:(const struct AudioComponentVector *)arg1;

@end
