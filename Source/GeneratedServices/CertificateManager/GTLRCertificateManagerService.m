// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Certificate Manager API (certificatemanager/v1)
// Documentation:
//   https://cloud.google.com/certificate-manager

#import "GTLRCertificateManager.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeCertificateManagerCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRCertificateManagerService
//

@implementation GTLRCertificateManagerService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://certificatemanager.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end