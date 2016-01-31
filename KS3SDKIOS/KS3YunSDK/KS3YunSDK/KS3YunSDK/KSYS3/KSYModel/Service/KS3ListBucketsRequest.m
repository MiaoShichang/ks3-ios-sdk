//
//  S3ListBucketsRequest.m
//  KS3SDK
//
//  Created by JackWong on 12/9/14.
//  Copyright (c) 2014 kingsoft. All rights reserved.
//

#import "KS3ListBucketsRequest.h"
#import "KS3Constants.h"

@implementation KS3ListBucketsRequest

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.httpMethod = kHttpMethodGet;
        self.contentMd5 = @"";
        self.contentType = @"";
        self.kSYHeader = @"";
        self.kSYResource = @"/";
        self.host = [[NSMutableString alloc] initWithString:@"http://kss.ksyun.com"];
    }
    return self;
}

@end
