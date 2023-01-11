//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADVector, NSString;

@interface ADDESRecordContents : NSObject
{
    _Bool _addImpression;
    _Bool _addTap;
    NSString *_adamID;
    NSString *_query;
    ADVector *_appVector;
    double _pTTR;
    NSString *_obfuscationID;
}

@property(retain, nonatomic) NSString *obfuscationID; // @synthesize obfuscationID=_obfuscationID;
@property(nonatomic) double pTTR; // @synthesize pTTR=_pTTR;
@property(retain, nonatomic) ADVector *appVector; // @synthesize appVector=_appVector;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) _Bool addTap; // @synthesize addTap=_addTap;
@property(nonatomic) _Bool addImpression; // @synthesize addImpression=_addImpression;
@property(retain, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
- (void).cxx_destruct;
- (void)collectODMLResponse:(id)arg1;
- (void)overrideAppVector:(id)arg1 vector:(id)arg2;
- (void)overrideObfuscationID;
- (void)overridePTTRData;
- (id)init;

@end
