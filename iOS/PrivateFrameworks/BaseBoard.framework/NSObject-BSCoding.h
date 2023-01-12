//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (BSCoding)
+ (id)bs_decodedFromData:(id)arg1;
+ (id)bs_objectFromData:(id)arg1;
+ (id)bs_dataFromObject:(id)arg1;
+ (id)bs_secureObjectFromData:(id)arg1 ofClasses:(id)arg2;
+ (id)bs_secureObjectFromData:(id)arg1 ofClass:(Class)arg2;
+ (id)bs_secureDataFromObject:(id)arg1;
+ (id)bs_secureDecodedFromData:(id)arg1 withAdditionalClasses:(id)arg2;
+ (id)bs_secureDecodedFromData:(id)arg1;
+ (_Bool)bs_isPlistableType;
+ (_Bool)supportsBSXPCSecureCoding;
- (id)bs_encoded;
- (id)bs_secureEncoded;
- (_Bool)bs_isPlistableType;
- (_Bool)supportsBSXPCSecureCoding;
@end

