//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC8FMClient24AuthenticationCredential : NSObject
{
    MISSING_TYPE *authToken;
    MISSING_TYPE *personId;
    MISSING_TYPE *hostName;
}

+ (_Bool)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthToken:(id)arg1 personId:(id)arg2 hostName:(id)arg3;
@property(nonatomic, readonly) NSString *hostName; // @synthesize hostName;
@property(nonatomic, readonly) NSString *personId; // @synthesize personId;
@property(nonatomic, readonly) NSString *authToken; // @synthesize authToken;

@end

