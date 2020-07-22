//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class EDKeyedCollection, NSString;

__attribute__((visibility("hidden")))
@interface EDTableStyle : NSObject <NSCopying>
{
    NSString *mName;
    EDKeyedCollection *mTableStyleElements;
}

+ (id)tableStyle;
- (id)description;
- (id)tableStyleElements;
- (void)setName:(id)arg1;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
