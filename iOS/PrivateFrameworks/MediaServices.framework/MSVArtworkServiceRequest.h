//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaServices/NSSecureCoding-Protocol.h>

@interface MSVArtworkServiceRequest : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long operationPriority;
@property(readonly, nonatomic) Class operationClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
