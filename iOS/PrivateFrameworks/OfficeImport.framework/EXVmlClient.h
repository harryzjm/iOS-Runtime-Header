//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/OAVReadClient-Protocol.h>

__attribute__((visibility("hidden")))
@interface EXVmlClient : NSObject <OAVReadClient>
{
}

+ (int)vmlSupportLevel;
+ (void)readClientDataFromGroup:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(struct _xmlNode *)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (id)edTextBoxForVmlTextInShape:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (id)readComment:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readAnchor:(struct _xmlNode *)arg1 to:(id)arg2;

@end
