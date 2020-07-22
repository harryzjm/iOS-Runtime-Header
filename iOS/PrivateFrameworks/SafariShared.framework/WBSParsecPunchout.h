//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface WBSParsecPunchout
{
    NSString *_name;
    NSString *_bundleID;
    NSString *_punchoutLabel;
    NSURL *_punchoutURL;
    NSURL *_installURL;
}

+ (id)schema;
@property(readonly, nonatomic) NSURL *installURL; // @synthesize installURL=_installURL;
@property(readonly, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;
@property(readonly, copy, nonatomic) NSString *punchoutLabel; // @synthesize punchoutLabel=_punchoutLabel;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

